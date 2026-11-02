typedef struct { unsigned char bytes[236]; } Entry;
extern Entry D_002F2DE8[];
extern void func_128718(Entry *entry);

void func_128888(unsigned int index) {
    func_128718(&D_002F2DE8[index]);
}
