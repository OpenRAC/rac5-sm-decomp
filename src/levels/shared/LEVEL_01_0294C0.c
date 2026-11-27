/* LEVEL_01:0x0294C0 -- reports whether the object's two enable bytes and its third flag byte are all set. */
long long func_0294C0(unsigned char *object)
{
    long long result;
    int flag;

    result = 0;
    if (object[0x1A8] != 0 && object[0x164] != 0) {
        flag = object[0x120] != 0;
        result = flag;
    }
    return result;
}
