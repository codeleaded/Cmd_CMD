#if defined __linux__
#include "/home/codeleaded/System/Static/Library/Cmd.h"
#elif defined _WINE
#include "/home/codeleaded/System/Static/Library/Cmd.h"
#elif defined _WIN32
#include "F:/home/codeleaded/System/Static/Library/Cmd.h"
#endif

int main(int argc,const char *argv[]){
    Session s = Session_New();
    Cmd cmd = Cmd_Make(&s);

    Cmd_StartSTDConsole(&s,&cmd);
    
    Cmd_Free(&cmd);
    Session_Free(&s);
    return s.ExitCode;
}