/* LEVEL_19:0x1172B0 -- placement copy of LEVEL_16_116B50.c: prepares the slot and registers its callback with the
   slot's record. */
typedef struct {
    char data[0x58];
} Rec;

extern Rec D_002DFCF8[];
extern void func_000BF0(int);
extern void func_000CF0(int, void (*)(void), Rec *);
extern void func_1171C0(void);

void func_1172B0(int slot)
{
    func_000BF0(slot);
    func_000CF0(0, func_1171C0, &D_002DFCF8[slot]);
}
