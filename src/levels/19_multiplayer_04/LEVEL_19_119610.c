/* LEVEL_19:0x119610 -- placement copy of LEVEL_16_118CA0.c: while the recorder is on, counts a frame; when a target is set writes a snapshot (a word from the linked object, two bytes of the target and the pending byte) at the cursor; then clears the pending byte and advances the cursor with func_1196C0. */
typedef struct {
    char pad00[0x45];
    unsigned char b45;
    unsigned char b46;
} Target;

typedef struct {
    char pad00[0xF4];
    int wF4;
} Linked;

extern unsigned char D_001B9670;
extern unsigned char D_001B9680;
extern unsigned int D_002E0258;
extern Target *D_002E025C;
extern char *D_001B967C;
extern Linked *D_001B9684;
extern char *func_1196C0(char *p);

void func_119610(void)
{
    if (D_001B9670 != 0) {
        D_002E0258++;
        if (D_002E025C != 0) {
            *(int *)D_001B967C = D_001B9684 ? D_001B9684->wF4 : 0;
            D_001B967C[4] = D_002E025C->b45;
            D_001B967C[5] = D_002E025C->b46;
            D_001B967C[6] = D_001B9680;
        }
        D_001B9680 = 0;
        D_001B967C = func_1196C0(D_001B967C);
    }
}
