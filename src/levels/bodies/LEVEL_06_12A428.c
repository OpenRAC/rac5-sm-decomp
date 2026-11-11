/* LEVEL_06:0x12A428 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_001F5C84;
extern Rec D_0037B398[];
extern void *memset(void *, int, unsigned int);

int func_12A428(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_0037B398[index], 0, sizeof(Rec));
    selected = index == D_001F5C84;
    D_0037B398[index].tail = 0;
    if (selected) {
        D_001F5C84 = -1;
    }
    return 1;
}
