#ifndef SPRITETOOLS_H
#define SPRITETOOLS_H

#include <string>
#include <map>
#include <vector>
class RuntimeScene;
class Object;

bool GD_API SpriteTurnedToward( const std::string &, const std::string &, std::map <std::string, std::vector<Object*> *> objectsLists1, std::map <std::string, std::vector<Object*> *> objectsLists2, float tolerance, bool conditionInverted );
bool GD_API SpriteCollision( const std::string &, const std::string &, std::map <std::string, std::vector<Object*> *> objectsLists1, std::map <std::string, std::vector<Object*> *> objectsLists2, bool conditionInverted );

#endif // SPRITETOOLS_H