#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_IMPL_CPPSTRING_CPPSTRING_MAKER_H
#define INCLUDED_CPCDS_IMPL_CPPSTRING_CPPSTRING_MAKER_H
#define destroy(str)free(str.bytes)
#ifndef NULL
#define NULL (void*)0
#endif
struct cppstring
{
	char*bytes;
	unsigned int len;
};
typedef struct cppstring cppstring;
cppstring mk_empty_str()
{
	cppstring str;
	str.bytes=NULL;
	str.len=0;
	return str;
}
cppstring mk_char_str(char c)
{
	cppstring str;
	str.bytes=malloc(2*sizeof(char));
	str.bytes[0]=c;
	str.bytes[1]=0;
	str.len=1;
	return str;
}
cppstring mk_array_str(char*s,unsigned int len)
{
	cppstring str;
	str.bytes=(char*)malloc((len+1)*sizeof(char));
	str.len=len;
	for(unsigned int i=0;i<len;str.bytes[i]=s[i],i++);
	str.bytes[str.len]=0;
	return str;
}
cppstring mk_from_cstr(char*s)
{
	/*printf("%s\n",s);
	fflush(stdout);*/
	return mk_array_str(s,strlen(s));
}
char str_char_at(cppstring*s,unsigned int index)
{
	return s->bytes[index%s->len];
}
cppstring str_modify_char(cppstring*s,unsigned int index,char c)
{
	s->bytes[index%s->len]=c;
	return*s;
}
cppstring str_swap_char(cppstring*s,unsigned int a,unsigned int b)
{
	s->bytes[a%s->len]+=s->bytes[b%s->len];
	s->bytes[b%s->len]=s->bytes[a%s->len]-s->bytes[b%s->len];
	s->bytes[a%s->len]=s->bytes[a%s->len]-s->bytes[b%s->len];
	return*s;
}
cppstring str_concat_pointer(cppstring*s,cppstring*t)
{
	char*cm=(char*)calloc(s->len+t->len+1,sizeof(char));
	unsigned int i=0;
	for(;i<s->len;i++)
	{
		cm[i]=s->bytes[i];
	}
	for(unsigned int j=0;j<t->len;j++)
	{
		cm[i+j]=t->bytes[j];
	}
	cm[s->len+t->len]=0;
	cppstring str=mk_array_str(cm,s->len+t->len);
	/*printf("%s %s\n",s->bytes,t->bytes);
	printf(cm);
	printf("\n");*/
	free(cm);
	return str;
}
void str_combine(cppstring*s,cppstring*t)
{
	char*cm=(char*)calloc(s->len+t->len+1,sizeof(char));
	unsigned int i=0;
	for(;i<s->len;i++)
	{
		cm[i]=s->bytes[i];
	}
	for(unsigned int j=0;j<t->len;j++)
	{
		cm[i+j]=t->bytes[j];
	}
	cm[s->len+t->len]=0;
	free(s->bytes);
	s->bytes=cm;
	s->len+=t->len;
}
cppstring str_concat(cppstring s,cppstring t)
{
	return str_concat_pointer(&s,&t);
}
cppstring substring(cppstring*s,unsigned int index,unsigned int len)
{
	char*b=(char*)calloc(len+1,1);
	b[len]=0;
	for(unsigned int i=0;i<len;i++)
	{
		b[i]=str_char_at(s,index+i);
	}
	//printf("substring %s\n",b);
	cppstring t=mk_array_str(b,len);
	return t;
}
#endif
#endif
