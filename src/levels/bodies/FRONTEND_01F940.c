/* FRONTEND:0x01F940 -- sets or clears one bit of the object's mask. */
struct Obj {
    char pad00[4];
    unsigned int f04;
};

void func_01F940(struct Obj *obj, unsigned char bit, int flag)
{
    unsigned int result;

    if (flag != 0)
        result = obj->f04 | (1 << bit);
    else
        result = obj->f04 & ~(1 << bit);
    obj->f04 = result;
}
