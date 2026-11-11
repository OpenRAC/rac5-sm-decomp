struct Holder
{
    char pad[0xf8];
    int value;
};
extern struct Holder D_002F3D20;

void func_132430(int *input)
{
    int incoming = *input;
    int current = D_002F3D20.value;
    D_002F3D20.value = incoming < current ? current : incoming;
}
