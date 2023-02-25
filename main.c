using System;

class PasswordGenerator {
    static void Main() {
        Console.WriteLine("Welcome to Password Generator!");
        Console.WriteLine("How long do you want your password to be?");
        int length = int.Parse(Console.ReadLine());

        // Define character sets
        string lowercase = "abcdefghijklmnopqrstuvwxyz";
        string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string numbers = "0123456789";
        string symbols = "!@#$%^&*()_+{}:\"<>?[];',./\\-=";

        // Combine character sets
        string allChars = lowercase + uppercase + numbers + symbols;

        // Create random object
        Random rand = new Random();

        // Generate password
        string password = "";
        for (int i = 0; i < length; i++) {
            int index = rand.Next(allChars.Length);
            password += allChars[index];
        }

        // Print password
        Console.WriteLine("Your password is:");
        Console.WriteLine(password);
    }
}
// by m1lean
