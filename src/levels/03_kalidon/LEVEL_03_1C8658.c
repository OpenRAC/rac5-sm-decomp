/* LEVEL_03:0x1C8658 -- placement copy of LEVEL_01_1B3568.c: registers an embedded record of the object with the shared player's id, then reports success. */
typedef struct {
    char pad[0xF8];
    int wF8;
} Player;

extern Player *D_0020CC64;
extern void func_0235A0(char *record, int kind, int id, int flag);

int func_1C8658(char *o)
{
    func_0235A0(o + 0x74, 9, D_0020CC64->wF8, -1);
    return 1;
}
