/* LEVEL_15:0x137698 -- registers the object and the handler in the global slot pair, sets flag 0x10 on the object and returns 1. */
typedef struct {
    char *object;
    void (*handler)(void);
} Slot;

extern Slot D_002F4F88;
extern void func_17D2C0(void);

int func_137698(char *object)
{
    D_002F4F88.object = object;
    D_002F4F88.handler = func_17D2C0;
    *(unsigned int *)(object + 0x64) |= 0x10;
    return 1;
}
