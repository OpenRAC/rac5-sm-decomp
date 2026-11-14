/* LEVEL_18:0x117C90 -- placement copy of LEVEL_16_118CA0.c: while the recorder is on, counts a frame; when a target is set writes a snapshot (a word from the linked object, two bytes of the target and the pending byte) at the cursor; then clears the pending byte and advances the cursor with func_117D40. */
typedef struct {
    char pad00[0x45];
    unsigned char b45;
    unsigned char b46;
} Target;

typedef struct {
    char pad00[0xF4];
    int wF4;
} Linked;

extern unsigned char D_001B9978;
extern unsigned char D_001B9988;
extern unsigned int D_002E0458;
extern Target *D_002E045C;
extern char *D_001B9984;
extern Linked *D_001B998C;
extern char *func_117D40(char *p);

void func_117C90(void)
{
    if (D_001B9978 != 0) {
        D_002E0458++;
        if (D_002E045C != 0) {
            *(int *)D_001B9984 = D_001B998C ? D_001B998C->wF4 : 0;
            D_001B9984[4] = D_002E045C->b45;
            D_001B9984[5] = D_002E045C->b46;
            D_001B9984[6] = D_001B9988;
        }
        D_001B9988 = 0;
        D_001B9984 = func_117D40(D_001B9984);
    }
}
