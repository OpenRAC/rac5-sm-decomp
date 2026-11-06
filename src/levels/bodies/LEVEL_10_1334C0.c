extern char D_002236B8[];
extern void func_1335C8(void);

char * func_1334C0(char *record)
{
    *(void **)(record + 0x14) = D_002236B8;
    func_1335C8();
    *(int *)(record + 4) = 0;
    return record;
}
