typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_00346D34[];
extern void func_0F0E48(void *entry, void *v);

void func_0F0F78(unsigned int index, void *v) {
    func_0F0E48(&D_00346D34[index], v);
}
