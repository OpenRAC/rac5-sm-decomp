/* LEVEL_04:0x22D48 -- initialise a sub-object at +0x998. */
void func_00022D48(char *base) {
    char *q = base + 0x998;
    *(float *)(q + 0x30) = 1.0f;
    *(int *)(q + 0x08) = 2;
    *(int *)(q + 0x2C) = 0;
    *(char *)(q + 0x34) = 0;
    *(int *)(q + 0x38) = 1;
    *(int *)(q + 0x3C) = 1;
    *(int *)(q + 0x28) = 1;
    *(int *)(base + 0x998) = 0;
    *(char *)(q + 0x35) = 1;
    *(int *)(q + 0x04) = 0;
}
