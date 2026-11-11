typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0027F318[];
extern void func_09F640(Entry *entry);

void func_09F770(unsigned int index) {
    func_09F640(&D_0027F318[index]);
}
