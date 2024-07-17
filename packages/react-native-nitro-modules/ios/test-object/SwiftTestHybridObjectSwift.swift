//
//  SwiftTestHybridObjectSwift.swift
//  NitroModules
//
//  Created by Marc Rousavy on 23.06.24.
//

import Foundation

public class SwiftTestHybridObjectSwift {
  private var _int: Int = 5
  public var int: Int {
    get {
      print("getting \(_int)")
      return _int
    }
    set {
      print("setting \(_int) to \(newValue)..")
      _int = newValue
    }
  }
  
  public var doooo: Double {
    return 4.0
  }
  
  private var _jsContext: margelo.JSContext? = nil
  public var jsContext: margelo.JSContext? {
    get { return _jsContext }
    set { _jsContext = newValue }
  }
  
  public init() {
    print("Initialized a new SwiftTestHybridObjectSwift!")
  }
}