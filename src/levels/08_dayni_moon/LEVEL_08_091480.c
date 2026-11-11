extern void func_091AE8(int, int);

void func_091480(int *p, int arg)
{
    int i;
    int obj;

    if ((p[1] & 4) == 0 && *(unsigned char *)((char *)p + 0x2C) == 0) {
        if (*(int *)((char *)p + 0x30) > 0) {
            i = 0;
            do {
                obj = *(int *)((char *)p + 0x34 + i * 4);
                if (obj != 0 && *(unsigned char *)(obj + 0x30) != 0) {
                    func_091AE8(obj, arg);
                }
                i = i + 1;
            } while (i < *(int *)((char *)p + 0x30));
        }
        *(unsigned char *)((char *)p + 0x2C) = 1;
    }
}
