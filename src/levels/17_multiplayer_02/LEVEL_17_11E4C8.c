/* LEVEL_17:0x11E4C8 -- placement copy of LEVEL_16_11EAA0.c: points the global cursor at its table, sets its count to 3, clears a flag and runs the shared reset. */
typedef struct {
    void *cur;
    int count;
} Cursor;

extern char D_001AE238[];
extern Cursor D_001AE248;
extern int D_002D293C;
extern void func_11D890(void);

void func_11E4C8(void)
{
    D_002D293C = 0;
    D_001AE248.cur = D_001AE238;
    D_001AE248.count = 3;
    func_11D890();
}
