#ifndef __prepdata_cmd__
#define __prepdata_cmd__
/*****
  command line parser interface -- generated by clig 
  (http://wsd.iitb.fhg.de/~kir/clighome/)

  The command line parser `clig':
  (C) 1995---2001 Harald Kirsch (kirschh@lionbioscience.com)
*****/

typedef struct s_Cmdline {
  /***** -o: Root of the output file names */
  char outfileP;
  char* outfile;
  int outfileC;
  /***** -pkmb: Raw data in Parkes Multibeam format */
  char pkmbP;
  /***** -gmrt: Raw data in GMRT Phased Array format */
  char gmrtP;
  /***** -bcpm: Raw data in Berkeley-Caltech Pulsar Machine (BPP) format */
  char bcpmP;
  /***** -wapp: Raw data in Wideband Arecibo Pulsar Processor (WAPP) format */
  char wappP;
  /***** -window: Window correlator lags with a Hamming window before FFTing */
  char windowP;
  /***** -numwapps: Number of WAPPs used with contiguous frequencies */
  char numwappsP;
  int numwapps;
  int numwappsC;
  /***** -if: A specific IF to use if available (summed IFs is the default) */
  char ifsP;
  int ifs;
  int ifsC;
  /***** -clip: Time-domain sigma to use for clipping (0.0 = no clipping, 6.0 = default */
  char clipP;
  float clip;
  int clipC;
  /***** -noclip: Do not clip the data.  (The default is to _always_ clip!) */
  char noclipP;
  /***** -numout: Output this many values.  If there are not enough values in the original data file, will pad the output file with the average value */
  char numoutP;
  int numout;
  int numoutC;
  /***** -downsamp: The number of neighboring bins to co-add */
  char downsampP;
  int downsamp;
  int downsampC;
  /***** -nobary: Do not barycenter the data */
  char nobaryP;
  /***** -shorts: Use short ints for the output data instead of floats */
  char shortsP;
  /***** -DE405: Use the DE405 ephemeris for barycentering instead of DE200 (the default) */
  char de405P;
  /***** -dm: The dispersion measure to de-disperse (cm^-3 pc) */
  char dmP;
  double dm;
  int dmC;
  /***** -mask: File containing masking information to use */
  char maskfileP;
  char* maskfile;
  int maskfileC;
  /***** uninterpreted command line parameters */
  int argc;
  /*@null*/char **argv;
  /***** the whole command line concatenated */
  char *full_cmd_line;
} Cmdline;


extern char *Program;
extern void usage(void);
extern /*@shared*/Cmdline *parseCmdline(int argc, char **argv);

extern void showOptionValues(void);

#endif

