/* w14/T01 — CMD_ParseCommandLine__FiPPcPi
 * Reconstructed from the retail disassembly: a small command-line state
 * machine that turns the arguments into a flags word.
 */
int strcmp(const char *a, const char *b);
extern char cmd_im[];   /* 0x01F1C118 */
extern char cmd_ctf[];  /* 0x01F1C120 */
int atoi(const char *s);
void MCPI_SetGameId__Fi(int id);
void MCPI_SetMyMsgBoxId__Fi(int id);
void MCPI_SetTheirMsgBoxId__Fi(int id);

int CMD_ParseCommandLine__FiPPcPi(int argc, char **argv, int *out) {
    int flags = 0;
    int state = 0;
    int i;
    char *arg;


    for (i = 0; i < argc; i++) {
        arg = argv[i];
        switch (state) {
        case 0:
            if (arg[0] == '-') {
                char code = arg[1] - 'c';

                switch (code) {
                case 4:
                    state = 8;
                    break;
                case 6:
                    if (arg[2] == 'm')
                        state = 4;
                    else if (arg[2] == 'g')
                        state = 2;
                    break;
                case 9:
                    state = 0x40;
                    break;
                case 10:
                    if (arg[2] == 'm')
                        state = 0x10;
                    else if (arg[2] == 't')
                        state = 0x20;
                    break;
                case 20:
                    state = 1;
                    break;
                case 0:
                    flags |= 0x100;
                    break;
                case 19:
                    flags |= 0x200;
                    break;
                case 17:
                    state = 0x400;
                    break;
                }
            }
            break;
        case 1:
            state = 0;
            break;
        case 2:
            flags |= 2;
            MCPI_SetGameId__Fi(atoi(arg));
            state = 0;
            break;
        case 0x10:
            flags |= 0x10;
            MCPI_SetMyMsgBoxId__Fi(atoi(arg));
            state = 0;
            break;
        case 0x20:
            flags |= 0x20;
            MCPI_SetTheirMsgBoxId__Fi(atoi(arg));
            state = 0;
            break;
        case 0x40:
            if (out) {
                flags |= 0x40;
                *out = atoi(arg);
            }
            state = 0;
            break;
        case 0x400:
            if (!strcmp(arg, cmd_im))
                flags |= 0x800;
            else if (!strcmp(arg, cmd_ctf))
                flags |= 0x1000;
            state = 0;
            break;
        }
    }
    return flags;
}
