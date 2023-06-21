/* loops:

while
for

*/
// ______________________________________________________________

//  program that asks and checks for a password - uses a while loop to ask the user for the password over and over again.
int main() {
  int pin = 0;
  int tries = 0;
  std::cout << "BANK OF LALA\n";
  std::cout << "Enter your PIN: ";
  std::cin >> pin;
  tries++;
  while (pin != 1234 && tries < 3) {
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    tries++;
  }
  if (pin == 1234) {
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n"; 
  }
}
