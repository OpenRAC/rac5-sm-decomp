/* LEVEL_20:0x0E9438 -- placement copy of LEVEL_16_116B50.c: prepares the slot and registers its callback with the
   slot's record. */
typedef struct {
    char data[0x58];
} Rec;

extern Rec D_002030D0[];
extern void func_000BD8(int);
extern void func_000CB0(int, void (*)(void), Rec *);
extern void func_0E9348(void);

void func_0E9438(int slot)
{
    func_000BD8(slot);
    func_000CB0(0, func_0E9348, &D_002030D0[slot]);
}
