typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_00331434[];
extern void func_0F0048(void *entry, void *v);

void func_0F0178(unsigned int index, void *v) {
    func_0F0048(&D_00331434[index], v);
}
