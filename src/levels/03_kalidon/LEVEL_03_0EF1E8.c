typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_0034C3BC[];
extern void func_0EED60(Entry *entry);

void func_0EF1E8(unsigned int index) {
    func_0EED60(&D_0034C3BC[index]);
}
