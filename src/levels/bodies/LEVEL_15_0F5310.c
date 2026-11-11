/* LEVEL_15:0x0F5310 -- posts message 0x73 with the level state byte, then
   notifies the state's sub-record. */
typedef struct {
    char pad[0xC];
    int value;
} Sub;

typedef struct {
    char pad[0x44168];
    unsigned char state;
    char pad2[3];
    Sub *sub;
} Big;

extern Big D_002A8B58;
extern void func_0214C0(int message, int a, unsigned char state);
extern int func_016A90(int a, int b);

void func_0F5310(void)
{
    Big *p = &D_002A8B58;

    func_0214C0(0x73, 1, p->state);
    func_016A90(p->sub->value, 1);
}
