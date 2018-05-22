#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct globalArgs_t {
	int noIndex;				/* -I option */
	char *langCode;				/* -l option */
	const char *outFileName;	/* -o option */
	FILE *outFile;
	int verbosity;				/* -v option */
	char **inputFiles;			/* input files */
	int numInputFiles;			/* # of input files */
} globalArgs;

static const char *optString = "Il:o:vh?";

void display_usage( void )
{
	puts( "doc2html - convert documents to HTML" );
    std::cout << optString << std::endl;
	/* ... */
	exit( EXIT_FAILURE );
}

/* Convert the input files to HTML, governed by globalArgs.
 */
void convert_document( void )
{
	/* ... */
}

int main( int argc, char *argv[] )
{
	int opt = 0;
	
	/* Initialize globalArgs before we get to work. */
	globalArgs.noIndex = 0;		/* false */
	globalArgs.langCode = NULL;
	globalArgs.outFileName = NULL;
	globalArgs.outFile = NULL;
	globalArgs.verbosity = 0;
	globalArgs.inputFiles = NULL;
	globalArgs.numInputFiles = 0;
	
	/* Process the arguments with getopt(), then 
	 * populate globalArgs. 
	 */
	opt = getopt( argc, argv, optString );
    std::cout << "opt : " << opt << std::endl;
	while( opt != -1 ) {
		switch( opt ) {
			case 'I':
				globalArgs.noIndex = 1;	/* true */
				break;
				
			case 'l':
				globalArgs.langCode = optarg;
				break;
				
			case 'o':
				/* This generates an "assignment from
				 * incompatible pointer type" warning that
				 * you can safely ignore.
				 */
				globalArgs.outFileName = optarg;
				break;
				
			case 'v':
				globalArgs.verbosity++;
				break;
				
			case 'h':	/* fall-through is intentional */
			case '?':
				display_usage();
				break;
				
			default:
				/* You won't actually get here. */
				break;
		}
		
		opt = getopt( argc, argv, optString );
	}
	
	globalArgs.inputFiles = argv + optind;
	globalArgs.numInputFiles = argc - optind;

	convert_document();
	
	return EXIT_SUCCESS;
}
