/* FRONTEND:0x01C780 -- adds a value to one entry of the global table. */
struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_001977B8;

void func_01C780(int index, int value)
{
    if (index < 0x13)
        D_001977B8.val[index] += value;
}
