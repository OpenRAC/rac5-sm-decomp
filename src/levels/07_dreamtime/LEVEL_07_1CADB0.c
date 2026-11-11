/* LEVEL_07:0x1CADB0 -- placement copy of LEVEL_01_1B3568.c: registers an embedded record of the object with the shared player's id, then reports success. */
typedef struct {
    char pad[0xF8];
    int wF8;
} Player;

extern Player *D_002088E4;
extern void func_023C98(char *record, int kind, int id, int flag);

int func_1CADB0(char *o)
{
    func_023C98(o + 0x74, 9, D_002088E4->wF8, -1);
    return 1;
}
