/* LEVEL_10:0x131BD8 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_0020FCE4;
extern Rec D_00397A18[];
extern void *memset(void *, int, unsigned int);

int func_131BD8(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_00397A18[index], 0, sizeof(Rec));
    selected = index == D_0020FCE4;
    D_00397A18[index].tail = 0;
    if (selected) {
        D_0020FCE4 = -1;
    }
    return 1;
}
