<h1 align="center">XSave-Lib 2.0.0b - Coding</h1>
<hr>
# XSave-Lib Changelog

## addData(const std::string, const std::string)
    int main(int argc, char *argv[]) {
        XSave<XSAVE_BYTE> data_bank("data_bank.xs");

        data_bank.addData("my_name", "Deuzivan");

        return EXIT_SUCCESS;
    }
## getData(const std::string)
    int main(int argc, char *argv[]) {
        XSave<XSAVE_BYTE> data_bank("data_bank.xs");

        std::cout << data_bank.getData("my_name") << std::endl;
        // output: Deuzivan

        return EXIT_SUCCESS;
    }
    
## getArrayData(const std::string)
    int main(int argc, char *argv[]) {
        XSave<XSAVE_BYTE> data_bank("data_bank.xs");

        for(const std::string value : data_bank.getArrayData("emails"))
            std::cout << value << std::endl;
        // output: 
        //  joao@gmail.com
        //  pedro@gmail.com
        //  carlos@gmail.com

        return EXIT_SUCCESS;
    }
## addArrayData(const std::string, const std::vector<std::string>)
    int main(int argc, char *argv[]) {
        XSave<XSAVE_BYTE> data_bank("data_bank.xs");

        data_bank.addArrayData("emails", {"joao@gmail.com", "pedro@gmail.com", "carlos@gmail.com"});

        return EXIT_SUCCESS;
    }

## loadFile(const std::string)
    int main(int argc, char *argv[]) {
        XSave<XSAVE_BYTE> data_bank;

        data_bank.loadFile("data_bank.xs");

        return EXIT_SUCCESS;
    }
## getLines()
    int main(int argc, char *argv[]) {
        XSave<XSAVE_BYTE> data_bank("data_bank.xs");

        for(const std::string line : data_bank.getLines())
            std::cout << line << std::endl;
        // output: my_name:Deuzivan 

        return EXIT_SUCCESS;
    }
