typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_00346D34[];
extern void func_0F0E48(Entry *entry);

void func_0F0F78(unsigned int index) {
    func_0F0E48(&D_00346D34[index]);
}
