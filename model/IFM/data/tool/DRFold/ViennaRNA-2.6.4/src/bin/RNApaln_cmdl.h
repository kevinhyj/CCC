/** @file RNApaln_cmdl.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.23
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt */

#ifndef RNAPALN_CMDL_H
#define RNAPALN_CMDL_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef RNAPALN_CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define RNAPALN_CMDLINE_PARSER_PACKAGE "RNApaln"
#endif

#ifndef RNAPALN_CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define RNAPALN_CMDLINE_PARSER_PACKAGE_NAME "RNApaln"
#endif

#ifndef RNAPALN_CMDLINE_PARSER_VERSION
/** @brief the program version */
#define RNAPALN_CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct RNApaln_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *detailed_help_help; /**< @brief Print help, including all details and hidden options, and exit help description.  */
  const char *full_help_help; /**< @brief Print help, including hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * printAlignment_arg;	/**< @brief Print an \"alignment\" with gaps of the profiles
  The aligned structures are written to filename, if specified
  Otherwise output is written to stdout, unless the -Xm option is set in which case \"backtrack.file\" is used.
 (default='stdout').  */
  char * printAlignment_orig;	/**< @brief Print an \"alignment\" with gaps of the profiles
  The aligned structures are written to filename, if specified
  Otherwise output is written to stdout, unless the -Xm option is set in which case \"backtrack.file\" is used.
 original value given at command line.  */
  const char *printAlignment_help; /**< @brief Print an \"alignment\" with gaps of the profiles
  The aligned structures are written to filename, if specified
  Otherwise output is written to stdout, unless the -Xm option is set in which case \"backtrack.file\" is used.
 help description.  */
  int noconv_flag;	/**< @brief Do not automatically substitute nucleotide \"T\" with \"U\".
  
 (default=off).  */
  const char *noconv_help; /**< @brief Do not automatically substitute nucleotide \"T\" with \"U\".
  
 help description.  */
  char * mode_arg;	/**< @brief Set the alignment mode to be used.
.  */
  char * mode_orig;	/**< @brief Set the alignment mode to be used.
 original value given at command line.  */
  const char *mode_help; /**< @brief Set the alignment mode to be used.
 help description.  */
  float gapo_arg;	/**< @brief Set the gap open penalty
  
.  */
  char * gapo_orig;	/**< @brief Set the gap open penalty
  
 original value given at command line.  */
  const char *gapo_help; /**< @brief Set the gap open penalty
  
 help description.  */
  float gape_arg;	/**< @brief Set the gap extension penalty
  
.  */
  char * gape_orig;	/**< @brief Set the gap extension penalty
  
 original value given at command line.  */
  const char *gape_help; /**< @brief Set the gap extension penalty
  
 help description.  */
  float seqw_arg;	/**< @brief Set the weight of sequence (compared to structure) in the scoring function.
  
.  */
  char * seqw_orig;	/**< @brief Set the weight of sequence (compared to structure) in the scoring function.
  
 original value given at command line.  */
  const char *seqw_help; /**< @brief Set the weight of sequence (compared to structure) in the scoring function.
  
 help description.  */
  int endgaps_flag;	/**< @brief Use free end-gaps
  
 (default=off).  */
  const char *endgaps_help; /**< @brief Use free end-gaps
  
 help description.  */
  double temp_arg;	/**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
 (default='37.0').  */
  char * temp_orig;	/**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
 original value given at command line.  */
  const char *temp_help; /**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
 help description.  */
  char * paramFile_arg;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
.  */
  char * paramFile_orig;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
 original value given at command line.  */
  const char *paramFile_help; /**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
 help description.  */
  int noTetra_flag;	/**< @brief Do not include special tabulated stabilizing energies for tri-, tetra- and hexaloop hairpins.
 (default=off).  */
  const char *noTetra_help; /**< @brief Do not include special tabulated stabilizing energies for tri-, tetra- and hexaloop hairpins.
 help description.  */
  double salt_arg;	/**< @brief Set salt concentration in molar (M). Default is 1.021M.
  
.  */
  char * salt_orig;	/**< @brief Set salt concentration in molar (M). Default is 1.021M.
  
 original value given at command line.  */
  const char *salt_help; /**< @brief Set salt concentration in molar (M). Default is 1.021M.
  
 help description.  */
  int dangles_arg;	/**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops.
 (default='2').  */
  char * dangles_orig;	/**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops.
 original value given at command line.  */
  const char *dangles_help; /**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops.
 help description.  */
  int noLP_flag;	/**< @brief Produce structures without lonely pairs (helices of length 1).
 (default=off).  */
  const char *noLP_help; /**< @brief Produce structures without lonely pairs (helices of length 1).
 help description.  */
  int noGU_flag;	/**< @brief Do not allow GU pairs.
  
 (default=off).  */
  const char *noGU_help; /**< @brief Do not allow GU pairs.
  
 help description.  */
  int noClosingGU_flag;	/**< @brief Do not allow GU pairs at the end of helices.
  
 (default=off).  */
  const char *noClosingGU_help; /**< @brief Do not allow GU pairs at the end of helices.
  
 help description.  */
  char * nsp_arg;	/**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
.  */
  char * nsp_orig;	/**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
 original value given at command line.  */
  const char *nsp_help; /**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
 help description.  */
  int energyModel_arg;	/**< @brief Set energy model.
.  */
  char * energyModel_orig;	/**< @brief Set energy model.
 original value given at command line.  */
  const char *energyModel_help; /**< @brief Set energy model.
 help description.  */
  float helical_rise_arg;	/**< @brief Set the helical rise of the helix in units of Angstrom.
 (default='2.8').  */
  char * helical_rise_orig;	/**< @brief Set the helical rise of the helix in units of Angstrom.
 original value given at command line.  */
  const char *helical_rise_help; /**< @brief Set the helical rise of the helix in units of Angstrom.
 help description.  */
  float backbone_length_arg;	/**< @brief Set the average backbone length for looped regions in units of Angstrom.
 (default='6.0').  */
  char * backbone_length_orig;	/**< @brief Set the average backbone length for looped regions in units of Angstrom.
 original value given at command line.  */
  const char *backbone_length_help; /**< @brief Set the average backbone length for looped regions in units of Angstrom.
 help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int detailed_help_given ;	/**< @brief Whether detailed-help was given.  */
  unsigned int full_help_given ;	/**< @brief Whether full-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int printAlignment_given ;	/**< @brief Whether printAlignment was given.  */
  unsigned int noconv_given ;	/**< @brief Whether noconv was given.  */
  unsigned int mode_given ;	/**< @brief Whether mode was given.  */
  unsigned int gapo_given ;	/**< @brief Whether gapo was given.  */
  unsigned int gape_given ;	/**< @brief Whether gape was given.  */
  unsigned int seqw_given ;	/**< @brief Whether seqw was given.  */
  unsigned int endgaps_given ;	/**< @brief Whether endgaps was given.  */
  unsigned int temp_given ;	/**< @brief Whether temp was given.  */
  unsigned int paramFile_given ;	/**< @brief Whether paramFile was given.  */
  unsigned int noTetra_given ;	/**< @brief Whether noTetra was given.  */
  unsigned int salt_given ;	/**< @brief Whether salt was given.  */
  unsigned int dangles_given ;	/**< @brief Whether dangles was given.  */
  unsigned int noLP_given ;	/**< @brief Whether noLP was given.  */
  unsigned int noGU_given ;	/**< @brief Whether noGU was given.  */
  unsigned int noClosingGU_given ;	/**< @brief Whether noClosingGU was given.  */
  unsigned int nsp_given ;	/**< @brief Whether nsp was given.  */
  unsigned int energyModel_given ;	/**< @brief Whether energyModel was given.  */
  unsigned int helical_rise_given ;	/**< @brief Whether helical-rise was given.  */
  unsigned int backbone_length_given ;	/**< @brief Whether backbone-length was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct RNApaln_cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure RNApaln_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure RNApaln_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *RNApaln_args_info_purpose;
/** @brief the usage string of the program */
extern const char *RNApaln_args_info_usage;
/** @brief the description string of the program */
extern const char *RNApaln_args_info_description;
/** @brief all the lines making the help output */
extern const char *RNApaln_args_info_help[];
/** @brief all the lines making the full help output (including hidden options) */
extern const char *RNApaln_args_info_full_help[];
/** @brief all the lines making the detailed help output (including hidden options and details) */
extern const char *RNApaln_args_info_detailed_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNApaln_cmdline_parser (int argc, char **argv,
  struct RNApaln_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use RNApaln_cmdline_parser_ext() instead
 */
int RNApaln_cmdline_parser2 (int argc, char **argv,
  struct RNApaln_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNApaln_cmdline_parser_ext (int argc, char **argv,
  struct RNApaln_args_info *args_info,
  struct RNApaln_cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNApaln_cmdline_parser_dump(FILE *outfile,
  struct RNApaln_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNApaln_cmdline_parser_file_save(const char *filename,
  struct RNApaln_args_info *args_info);

/**
 * Print the help
 */
void RNApaln_cmdline_parser_print_help(void);
/**
 * Print the full help (including hidden options)
 */
void RNApaln_cmdline_parser_print_full_help(void);
/**
 * Print the detailed help (including hidden options and details)
 */
void RNApaln_cmdline_parser_print_detailed_help(void);
/**
 * Print the version
 */
void RNApaln_cmdline_parser_print_version(void);

/**
 * Initializes all the fields a RNApaln_cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void RNApaln_cmdline_parser_params_init(struct RNApaln_cmdline_parser_params *params);

/**
 * Allocates dynamically a RNApaln_cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized RNApaln_cmdline_parser_params structure
 */
struct RNApaln_cmdline_parser_params *RNApaln_cmdline_parser_params_create(void);

/**
 * Initializes the passed RNApaln_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void RNApaln_cmdline_parser_init (struct RNApaln_args_info *args_info);
/**
 * Deallocates the string fields of the RNApaln_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void RNApaln_cmdline_parser_free (struct RNApaln_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int RNApaln_cmdline_parser_required (struct RNApaln_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* RNAPALN_CMDL_H */
