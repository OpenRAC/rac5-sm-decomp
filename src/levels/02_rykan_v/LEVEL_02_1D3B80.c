/* LEVEL_02:0x1D3B80 -- placement copy of LEVEL_01_1B3568.c: registers an embedded record of the object with the shared player's id, then reports success. */
typedef struct {
    char pad[0xF8];
    int wF8;
} Player;

extern Player *D_002095A4;
extern void func_024198(char *record, int kind, int id, int flag);

int func_1D3B80(char *o)
{
    func_024198(o + 0x74, 9, D_002095A4->wF8, -1);
    return 1;
}
