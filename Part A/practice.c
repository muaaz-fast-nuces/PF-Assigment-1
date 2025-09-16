Start
    Input age
    IF age >= 18 THEN
        Input eye_test ('P' for pass, 'F' for fail)

        IF eye_test == 'P' THEN
            Input written_test ('P' for pass, 'F' for fail)

            IF written_test == 'P' THEN
                Input driving_test ('P' for pass, 'F' for fail)

                IF driving_test == 'P' THEN
                    IF age > 60 THEN
                        Input medical_certificate ('Y' for yes, 'N' for no)

                        IF medical_certificate == 'Y' THEN
                            Print "You are eligible for driving license"
                            Stop
                        ENDIF
                    ELSE
                        Print "You are eligible for driving license"
                        Stop

    Print "You are not eligible for the driving license"
End
