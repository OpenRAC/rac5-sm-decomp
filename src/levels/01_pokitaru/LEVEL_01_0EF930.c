typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_003305BC[];
extern void func_0EF800(Entry *entry, float *pos);

void func_0EF930(unsigned int index, float *pos) {
    func_0EF800(&D_003305BC[index], pos);
}
