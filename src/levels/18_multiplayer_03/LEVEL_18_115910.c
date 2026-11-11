/* LEVEL_18:0x115910 -- placement copy of LEVEL_16_116B50.c: prepares the slot and registers its callback with the
   slot's record. */
typedef struct {
    char data[0x58];
} Rec;

extern Rec D_002DFEF8[];
extern void func_000BF0(int);
extern void func_000CF0(int, void (*)(void), Rec *);
extern void func_115820(void);

void func_115910(int slot)
{
    func_000BF0(slot);
    func_000CF0(0, func_115820, &D_002DFEF8[slot]);
}
