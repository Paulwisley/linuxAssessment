#include "head.h"
#include "Person.h"
class SerializeX{
	public:
		int Serialize(const char *pFilePath, Person p);
		int deSerialize(const char *pFilePath, Person &p);
		void show(char *fileName);
}
