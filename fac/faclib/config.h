#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_ 1

/*************************************************************
  Header for module "config".
  This module generates electron configuations and 
  carries out the angular momentum coupling. 

  Author: M. F. Gu, mfgu@space.mit.edu
**************************************************************/

/* 
<** The following format is used for documenting the source **>
*/

/* documenting a struct */
/*
** STRUCT:      
** PURPOSE:     
** FIELDS:      
** NOTE:        
*/

/* documenting a function */
/* 
** FUNCTION:    
** PURPOSE:     
** INPUT:       
** RETURN:      
** SIDE EFFECT: 
** NOTE:        
*/

/* documenting a macro function */
/* 
** MACRO:       
** PURPOSE:     
** INPUT:       
** RETURN:      
** SIDE EFFECT: 
** NOTE:        
*/

/* documenting a global, static varialbe or a macro constant */
/*
** VARIABLE:    
** TYPE:        
** PURPOSE:     
** NOTE:        
*/

#include "array.h"
#include "global.h"
#include "nucleus.h"

/*
** VARIABLE:    MAX_SPEC_SYMBOLS = 14
** TYPE:        macro constant
** PURPOSE:     the maximum number of spectroscopic symbols for 
**              orbital angular momentum.
** NOTE:        
*/
#define MAX_SPEC_SYMBOLS   14 

/*
** VARIABLE:    LEVEL_NAME_LEN = 128
** TYPE:        macro constant
** PURPOSE:     The maximum length of the level name.
** NOTE:        
*/
#define LEVEL_NAME_LEN     128

/*
** VARIABLE:    GROUP_NAME_LEN = 32
** TYPE:        macro constant.
** PURPOSE:     the maximum length of the group name.
** NOTE:        
*/
#define GROUP_NAME_LEN     32

/*
** VARIABLE:    MAX_GROUPS = 1024
** TYPE:        macro constant.
** PURPOSE:     the maximum number of configuration groups
** NOTE:        
*/
#define MAX_GROUPS         1024

/*
** VARIABLE:    MAX_SYMMETRIES = 512
** TYPE:        macro constant
** PURPOSE:     the maximum number of j-parity symmetries.
** NOTE:        
*/
#define MAX_SYMMETRIES     512

/*
** VARIABLE:    CONFIGS_BLOCK = 256
** TYPE:        macro constant
** PURPOSE:     the number of configurations in one array block.
** NOTE:        
*/
#define CONFIGS_BLOCK      256

/*
** VARIABLE:    STATES_BLOCK = 512
** TYPE:        macro constant
** PURPOSE:     the number of states in one array block
** NOTE:        
*/
#define STATES_BLOCK       512

/*
** STRUCT:      SHELL
** PURPOSE:     a relativistic subshell.
** FIELDS:      {int n},
**              the principal quantum number.
**              {int kappa},
**              the relativistic angular quantum nubmer.
**              {int nq},
**              the occupation number.
** NOTE:        
*/
typedef struct _SHELL_ {
  int n;
  int kappa;
  int nq;
} SHELL;
  
 
/*
** STRUCT:      SHELL_STATE
** PURPOSE:     a shell state after coupling.
** FIELDS:      {int shellJ},
**              the angular momentum of the shell.
**              {int totalJ},
**              the total angular momentum of the shell after coupling.
**              {int nu},
**              the seneority of the state.
**              {int Nr},
**              any additional quantum numbers.
** NOTE:        a SHELL_STATE specify the seniority and the total 
**              angular momentum of a shell with any occupation, along 
**              with the total angular momentum when this shell is 
**              coupled to its next inner shell. if this is the inner 
**              most shell, this angular momentum is the same as the 
**              shell total_j. All angular momenta are represented by 
**              the double of its actual value.
*/
typedef struct _SHELL_STATE_{
  int shellJ;
  int totalJ;
  int nu; 
  int Nr;
} SHELL_STATE;

/* 
** MACRO:       GetShellJ, GetTotalJ, GetNu, GetNr
** PURPOSE:     convenient macros to access the fields in a SHELL_STATE.
** INPUT:       {SHELL_STATE s},
**              a shell state.
** RETURN:      {int},
**              results.
** SIDE EFFECT: 
** NOTE:        
*/
#define GetShellJ(s) ((s).shellJ)
#define GetTotalJ(s) ((s).totalJ)
#define GetNu(s)     ((s).nu)
#define GetNr(s)     ((s).Nr)

/*
** STRUCT:      CONFIG
** PURPOSE:     a configuration.
** FIELDS:      {int n_electrons},
**              number of electrons of the configuration.
**              {n_shells},
**              number of the subshells.
**              {n_csfs},
**              number of states resulting from coupling.
**              {SHELL *shells},
**              the shell structure.
**              {SHELL_STATE *csfs},
**              a list specifying all states.
** NOTE:        shells and csfs have the shells in reverse order,
**              i.e., the outmost shell is in the beginning of the list.
*/
typedef struct _CONFIG_ {
  int n_electrons;
  int n_shells;
  int n_csfs;
  SHELL *shells;
  SHELL_STATE *csfs; 
} CONFIG;


/*
** STRUCT:      AVERAGE_CONFIG
** PURPOSE:     the mean configuration for the determinaiton 
**              of the central potential.
** FIELDS:      {int n_cfgs},
**              the number of actual configurations which determined 
**              the mean configuration.
**              {int n_shells},
**              the number of subshells in the mean configuration.
**              {int *n, *kappa, *nq},
**              lists specifing all the shells.
** NOTE:        
*/
typedef struct _AVERAGE_CONFIG_ {
  int n_cfgs;
  int n_shells;
  int *n;
  int *kappa;
  double *nq;
} AVERAGE_CONFIG;

/*
** STRUCT:      CONFIG_GROUP
** PURPOSE:     a group of configurations.
** FIELDS:      {char name[]},
**              a string identifies the group.
**              {int n_cfgs},
**              number of configurations in the group.
**              {int n_electrons},
**              number of electrons in the configurations.
**              {ARRAY cfg_list},
**              array of all configurations in the group.
** NOTE:        all configurations in a group must have the 
**              same number of electrons.
*/
typedef struct _CONFIG_GROUP_ {
  char name[GROUP_NAME_LEN];  
  int n_cfgs;
  int n_electrons;
  ARRAY cfg_list;
} CONFIG_GROUP;

/*
** STRUCT:      STATE
** PURPOSE:     a basis state.
** FIELDS:      {int kgroup},
**              which configuration group the state belongs to.
**              which configuration the state belongs to.
**              which state in all the states the configuration 
**              generates.
** NOTE:        if the state is generated by adding one spectator
**              electron to an existing state, then 
**              kgroup = -(k+1), where k is the index of the parent
**              state in the SYMMETRY array. kcfg = ko, where ko is the 
**              index of the spectator orbital in the orbital array.
**              and kstate = tj, where tj is the total angular momentum
**              of the state.
*/
typedef struct _STATE_ {
  int kgroup;
  int kcfg;
  int kstate;
} STATE;

/*
** STRUCT:      SYMMETRY
** PURPOSE:     a j-parity symmetry.
** FIELDS:      {int n_states},
**              number of states in the symmetry.
**              {ARRAY state},
**              an array of states in the symmetry.
** NOTE:        
*/
typedef struct _SYMMETRY_ {
  int n_states;
  ARRAY states;
} SYMMETRY;


int          Couple(CONFIG *cfg);
int          CoupleOutmost(CONFIG *cfg, CONFIG *outmost, CONFIG *inner);
int          GetSingleShell(CONFIG *cfg);
void         UnpackShell(SHELL *s, int *n, int *kl, int *j, int *nq);
void         PackShell(SHELL *s, int n, int kl, int j, int nq); 
int          GetJ(SHELL *shell);
int          GetL(SHELL *shell);
int          GetNq(SHELL *shell);
void         GetJLFromKappa(int kappa, int *j, int *kl);
int          GetLFromKappa(int kappa); 
int          GetJLFromSymbol(char *s, int *j, int *kl);
int          GetJFromKappa(int kappa);
int          GetKappaFromJL(int j, int kl); 
int          CompareShell(SHELL *s1, SHELL *s2);
int          ShellClosed(SHELL *s);
void         PackShellState(SHELL_STATE *s, int J, int j, int nu, int Nr);
int          GetConfigFromString(CONFIG **cfg, char *scfg);
int          GetAverageConfigFromSTring(int **n, int **kappa, 
					double **nq, char *scfg);
int          GetAverageConfig(int ng, int *kg, double *weight,
			      int n_screen, int *screened_n, 
			      double screened_charge,
			      int screened_kl, AVERAGE_CONFIG *acfg);
int          GroupIndex(char *name);
int          GroupExists(char *name);
int          AddConfigToList(int k, CONFIG *cfg);
int          AddGroup(char *name);
CONFIG_GROUP *GetGroup(int k);
CONFIG_GROUP *GetNewGroup();
int          GetNumGroups();
CONFIG       *GetConfig(STATE *s);
int          AddStateToSymmetry(int kg, int kc, int kstate, 
				int parity, int j);
int          AddConfigToSymmetry(int kg, int kc, CONFIG *cfg);
SYMMETRY     *GetSymmetry(int k);
void         DecodePJ(int i, int *p, int *j);
int          SpecSymbol(char *s, int kl);
int          InGroups(int kg, int ng, int *kgroup);
int          InitConfig();

#endif
