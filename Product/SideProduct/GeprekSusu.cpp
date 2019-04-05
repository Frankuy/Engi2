#include "GeprekSusu.h"

GeprekSusu::GeprekSusu() : SideProduct("Geprek Susu", 50000){
    SusuSapi a;
    requirements.push_back(a);
    DagingAyam b;
    requirements.push_back(b);
}