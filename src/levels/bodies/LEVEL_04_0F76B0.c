typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_0034BC34[];
extern void func_0F7580(void *entry, void *v);

void func_0F76B0(unsigned int index, void *v) {
    func_0F7580(&D_0034BC34[index], v);
}
