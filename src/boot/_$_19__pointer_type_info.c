/* __pointer_type_info::~__pointer_type_info -- base-class destructor wrapper
   (gcc 2.95 tinfo2.cc: the implicit destructor chains to std::type_info). */
extern void _$_9type_info(void *self);

void _$_19__pointer_type_info(void *self) {
    _$_9type_info(self);
}
