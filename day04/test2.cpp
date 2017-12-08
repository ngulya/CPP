// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   test.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 14:22:57 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 14:22:58 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>


class CA { // Абстрактный класс
  public:
    CA ( void ) { std::cout << "This object of the class "; }

    virtual void Abstr ( void ) = 0; // Чистая (пустая) виртуальная функция.
    void         fun   ( void ) { std::cout << "Реализация не будет наследоваться!"; }

    ~CA () { std::cout << "." << std::endl; } //Вызывается в обр. порядке конструкторов
  };

class CB : public CA {
  public:
    CB ( void ) { std::cout << "CB;\n"; }

    void Abstr ( void ){ std::cout << " call function cb.Abstr();\n"; } //Подменяющая функция.
    void fun   ( void ){ std::cout << " call function cb.fun()\n"; }

    ~CB () {std::cout << "~CB" << std::endl;} // Неверно для абстр. кл. ~CB(){ ~CA(); } 
  };

// class CC : public CA {
//   public:
//     CC ( void ) { std::cout << "CC;\n"; }

//     void Abstr ( void ) { std::cout << " call function cc.Abstr();\n"; } //Подменяющая функция.
//     void fun   ( void ) { std::cout << " call function cc.fun()\n"; }

//   ~CC () {std::cout << "~CC" << std::endl;} // Неверно для абстр. кл. ~CC(){ ~CA(); } 
//   };

int main () {
  std::cout << "Program:" << std::endl;
  CB cb;
  cb.Abstr(); cb.fun(); cb.~CB();

  // CC cc;
  // cc.Abstr(); cc.fun(); cc.~CC();

  return 0;
  }