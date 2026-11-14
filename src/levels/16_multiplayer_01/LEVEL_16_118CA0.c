/* LEVEL_16:0x118CA0 -- while the recorder is on, counts a frame; when a target is set writes a snapshot (a word from the linked object, two bytes of the target and the pending byte) at the cursor; then clears the pending byte and advances the cursor with func_118D50. */
typedef struct {
    char pad00[0x45];
    unsigned char b45;
    unsigned char b46;
} Target;

typedef struct {
    char pad00[0xF4];
    int wF4;
} Linked;

extern unsigned char D_001B84F8;
extern unsigned char D_001B8508;
extern unsigned int D_002E00D8;
extern Target *D_002E00DC;
extern char *D_001B8504;
extern Linked *D_001B850C;
extern char *func_118D50(char *p);

void func_118CA0(void)
{
    if (D_001B84F8 != 0) {
        D_002E00D8++;
        if (D_002E00DC != 0) {
            *(int *)D_001B8504 = D_001B850C ? D_001B850C->wF4 : 0;
            D_001B8504[4] = D_002E00DC->b45;
            D_001B8504[5] = D_002E00DC->b46;
            D_001B8504[6] = D_001B8508;
        }
        D_001B8508 = 0;
        D_001B8504 = func_118D50(D_001B8504);
    }
}
