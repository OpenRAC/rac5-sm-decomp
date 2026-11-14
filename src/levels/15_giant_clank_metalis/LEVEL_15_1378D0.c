/* LEVEL_15:0x1378D0 -- clears a byte and sets a word to -1 in the global record; returns 0 when func_1347F0 reports true, else -1. */
typedef struct {
    char pad00[0x15C];
    unsigned char flag;
    char pad15D[3];
    int index;
} Rec;

extern Rec D_002F4F88;
extern int func_1347F0(void);

int func_1378D0(void)
{
    int r = -1;

    D_002F4F88.index = -1;
    D_002F4F88.flag = 0;
    if (func_1347F0() != 0)
        r = 0;
    return r;
}
