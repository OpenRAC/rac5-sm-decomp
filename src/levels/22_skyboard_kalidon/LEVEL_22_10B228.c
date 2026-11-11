/* LEVEL_22:0x10B228 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_00166064;
extern Rec D_002E40F8[];
extern void *memset(void *, int, unsigned int);

int func_10B228(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_002E40F8[index], 0, sizeof(Rec));
    selected = index == D_00166064;
    D_002E40F8[index].tail = 0;
    if (selected) {
        D_00166064 = -1;
    }
    return 1;
}
