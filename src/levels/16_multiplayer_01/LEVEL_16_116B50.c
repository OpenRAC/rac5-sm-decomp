/* LEVEL_16:0x116B50 -- prepares the slot and registers its callback with the
   slot's record. */
typedef struct {
    char data[0x58];
} Rec;

extern Rec D_002DFB78[];
extern void func_000BF0(int);
extern void func_000CF0(int, void (*)(void), Rec *);
extern void func_116A60(void);

void func_116B50(int slot)
{
    func_000BF0(slot);
    func_000CF0(0, func_116A60, &D_002DFB78[slot]);
}
