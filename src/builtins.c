/*
 * This file was generated by the mkbuiltins program.
 */

#include "shell.h"
#include "builtins.h"

int histcmd(int, char **);
int breakcmd(int, char **);
int cdcmd(int, char **);
int commandcmd(int, char **);
int dotcmd(int, char **);
int echocmd(int, char **);
int evalcmd(int, char **);
int execcmd(int, char **);
int exitcmd(int, char **);
int exportcmd(int, char **);
int falsecmd(int, char **);
int getoptscmd(int, char **);
int hashcmd(int, char **);
int jobscmd(int, char **);
int localcmd(int, char **);
int printfcmd(int, char **);
int pwdcmd(int, char **);
int readcmd(int, char **);
int returncmd(int, char **);
int setcmd(int, char **);
int shiftcmd(int, char **);
int timescmd(int, char **);
int trapcmd(int, char **);
int truecmd(int, char **);
int typecmd(int, char **);
int umaskcmd(int, char **);
int unaliascmd(int, char **);
int unsetcmd(int, char **);
int waitcmd(int, char **);
int aliascmd(int, char **);
int testcmd(int, char **);
int killcmd(int, char **);

const struct builtincmd builtincmd[] = {
	{ ".", dotcmd, 3 },
	{ ":", truecmd, 3 },
	{ "[", testcmd, 0 },
	{ "alias", aliascmd, 6 },
	{ "break", breakcmd, 3 },
	{ "cd", cdcmd, 2 },
	{ "chdir", cdcmd, 0 },
	{ "command", commandcmd, 2 },
	{ "continue", breakcmd, 3 },
	{ "echo", echocmd, 0 },
	{ "eval", NULL, 3 },
	{ "exec", execcmd, 3 },
	{ "exit", exitcmd, 3 },
	{ "export", exportcmd, 7 },
	{ "false", falsecmd, 2 },
	{ "fc", histcmd, 2 },
	{ "getopts", getoptscmd, 2 },
	{ "hash", hashcmd, 0 },
	{ "jobs", jobscmd, 2 },
	{ "kill", killcmd, 2 },
	{ "local", localcmd, 7 },
	{ "printf", printfcmd, 0 },
	{ "pwd", pwdcmd, 0 },
	{ "read", readcmd, 2 },
	{ "readonly", exportcmd, 7 },
	{ "return", returncmd, 3 },
	{ "set", setcmd, 3 },
	{ "shift", shiftcmd, 3 },
	{ "test", testcmd, 0 },
	{ "times", timescmd, 3 },
	{ "trap", trapcmd, 3 },
	{ "true", truecmd, 2 },
	{ "type", typecmd, 0 },
	{ "umask", umaskcmd, 2 },
	{ "unalias", unaliascmd, 2 },
	{ "unset", unsetcmd, 3 },
	{ "wait", waitcmd, 2 },
};
