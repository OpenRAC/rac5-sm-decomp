/* FRONTEND:0x00A9D8 -- selects one of the fixed size entries. */
struct Entry {
    char pad[0x18];
};

extern struct Entry D_001230C8[];

void func_00ADF0(void *);

void func_00A9D8(int mode)
{
    switch (mode) {
    case 1:
        func_00ADF0(&D_001230C8[mode]);
        break;
    case 2:
        break;
    case 5:
        func_00ADF0(&D_001230C8[mode]);
        break;
    default:
        func_00ADF0(&D_001230C8[mode]);
        break;
    }
}
