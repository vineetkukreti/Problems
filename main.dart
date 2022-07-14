import 'package:flutter/material.dart';
import 'package:van/screen/contact.dart';
import 'package:van/screen/developer.dart';
import 'package:van/screen/home.dart';
import 'package:van/screen/login.dart';
import 'package:van/screen/splashScreen.dart';
import 'package:van/util/routes.dart';
import 'package:van/screen/admission.dart';
import 'package:van/screen/website.dart';
import 'package:van/screen/signup.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      //  initialRoute: '/home',
      // provides the intial page except '/'
      routes: {
        // '/': (context) => SPage(),
        '/': (context) => SignUpPage(),
        // '/': (context) => AdmissionPage(),
        //'/': (context) => HomePage(),
        //  '/': (context) => SPage(),
        // MyRoutes.homeRoute: (context) => HomePage(),
        // MyRoutes.loginRoute: (context) => LoginPage(),
        // "/login":(context)=>LoginPage(),
      },
    );
  }
}
