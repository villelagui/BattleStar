#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


class Nave{
        protected:
            string nvNome;
            int nvAtk;
            int nvDef;
            int nvLvl;
            int nvLife;
            int nvPontos;
        public:
            Nave          (string Nome, int Atk, int Def, int Lvl, int Life);

            void setAtk    (int Atk);
            void setDef    (int Def);
            void setLvl    (int Lvl);
            void setLife   (int Life);
            void setPontos (int Pontos);

            string getNome();
            int getAtk();
            int getDef();
            int getLvl();
            int getLife();
            int getPontos();

            void dadosNave();
          };
Nave::Nave(string Nome, int Atk, int Def, int Lvl, int Life){
                                                nvNome   = Nome;
                                                nvAtk    = Atk;
                                                nvDef    = Def;
                                                nvLvl    = Lvl;
                                                nvLife   = Life;
                                                nvPontos = 5;
                                               };
void Nave::setAtk(int Atk){
                            nvAtk = Atk;
                          };

void Nave::setDef(int Def){
                            nvDef = Def;
                          };

void Nave::setLvl(int Lvl){
                            nvLvl = Lvl;
                          };

void Nave::setLife(int Life){
                              nvLife = Life;
                            };

void Nave::setPontos(int Pontos){
                                  nvPontos = Pontos;
                                };

string Nave::getNome(){
                        return nvNome;
                      };

int Nave::getPontos(){
                       return nvPontos;
                     };

int Nave::getAtk(){
                    return nvAtk;
                  };

int Nave::getDef(){
                    return nvDef;
                  };

int Nave::getLife(){
                     return nvLife;
                   };

int Nave::getLvl(){
                    return nvLvl;
                  };

void Nave::dadosNave(){
                        cout<<"\\\\\\\\\\\\\\\\\\\\"<<endl;
                        cout<<"|| Nome: "<<nvNome<<endl;
                        cout<<"|| Ataque: "<<nvAtk<<endl;
                        cout<<"|| Defesa: "<<nvDef<<endl;
                        cout<<"|| Life: "<<nvLife<<endl;
                        cout<<"|| Level: "<<nvLvl<<endl;
                        cout<<"|| Pontos: "<<nvPontos<<endl;
                        cout<<"\\\\\\\\\\\\\\\\\\\\"<<endl<<endl;
                      };
