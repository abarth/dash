/*
 * This file was generated by the mksyntax program.
 */

#include <ctype.h>

#ifdef CEOF
#undef CEOF
#endif

/* Syntax classes */
#define CWORD 0			/* character is nothing special */
#define CNL 1			/* newline character */
#define CBACK 2			/* a backslash character */
#define CSQUOTE 3		/* single quote */
#define CDQUOTE 4		/* double quote */
#define CENDQUOTE 5		/* a terminating quote */
#define CBQUOTE 6		/* backwards single quote */
#define CVAR 7			/* a dollar sign */
#define CENDVAR 8		/* a '}' character */
#define CLP 9			/* a left paren in arithmetic */
#define CRP 10			/* a right paren in arithmetic */
#define CEOF 11			/* end of file */
#define CCTL 12			/* like CWORD, except it must be escaped */
#define CSPCL 13		/* these terminate a word */
#define CIGN 14			/* character should be ignored */

/* Syntax classes for is_ functions */
#define ISDIGIT 01		/* a digit */
#define ISUPPER 02		/* an upper case letter */
#define ISLOWER 04		/* a lower case letter */
#define ISUNDER 010		/* an underscore */
#define ISSPECL 020		/* the name of a special parameter */

#define SYNBASE 130
#define PEOF -130

#define PEOA -129


#define BASESYNTAX (basesyntax + SYNBASE)
#define DQSYNTAX (dqsyntax + SYNBASE)
#define SQSYNTAX (sqsyntax + SYNBASE)
#define ARISYNTAX (arisyntax + SYNBASE)

#define is_digit(c)	((unsigned)((c) - '0') <= 9)
#define is_alpha(c)	isalpha((unsigned char)(c))
#define is_name(c)	((c) == '_' || isalpha((unsigned char)(c)))
#define is_in_name(c)	((c) == '_' || isalnum((unsigned char)(c)))
#define is_special(c)	((is_type+SYNBASE)[(signed char)(c)] & (ISSPECL|ISDIGIT))
#define digit_val(c)	((c) - '0')

extern const char basesyntax[];
extern const char dqsyntax[];
extern const char sqsyntax[];
extern const char arisyntax[];
extern const char is_type[];
